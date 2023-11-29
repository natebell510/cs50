import os
import qrcode

img = qrcode.make("https://www.youtube.com/watch?v=dCsr_4hIoyg&ab_channel=%D0%9C%D0%A3%D0%94%D0%A0%D0%9E%D0%95%D0%94")
img.save("qr.png", "PNG")
os.system("open qr.png")
