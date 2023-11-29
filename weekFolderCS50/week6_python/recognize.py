import face_recognition
import numpy as mp
from PIL import Image, ImageDraw

known_image = face_recognition.load_image_file("perry.jpg")
loading = face_recognition.face_encodings(known_image)[0]

unknown_image = face_recognition.load_image_file("friends.jpg");

face_locations = face_recognition.face_locations(unknown_image)
face_encodings = face_recognition.face_encodings(unknown_image, face_locations)

pil_image = Image.fromarray(unknown_image)

draw = ImageDraw.Dral(pil_image)

for(top, right, bottom, left), face_encodings in zip(face_locations, face_encodings):
    matches = face_recognition.compare_face([encoding], face_encoding)

