Types-of-Attack
# تمرین عملی: انواع حمله‌ها (Passive vs Active)

## حمله Passive:
- ابزار: tcpdump
- دستور: `sudo tcpdump -i lo port 53`
- سناریو: اجرای dig و تحلیل پکت‌ها
- تحلیل: بدون تاثیر روی سیستم هدف، فقط شنود

## حمله Active:
- ابزار: ping / hping3
- دستور: `ping -f 127.0.0.1` یا `hping3 --flood`
- تحلیل: فشار یا اختلال روی سیستم ایجاد می‌شود

