# Reconnaissance Notes – Mr. Robot VM

## Basic Info

**Target IP:** 192.168.52.85  
**CMS:** WordPress  
**Server:** Apache  
**PHP Version:** 5.5.29

---

## Observations from Manual Browsing

- `/` → صفحه وردپرس ساده با قالب پیش‌فرض. محتوای پیش‌فرض فعال است.
- `/wordpress/` → وجود دارد، اما صفحه اصلی نیز وردپرس است.
- `/wp-login/` → فرم ورود وردپرس دیده می‌شود.
- `/admin/` → صفحه سیاه بدون اطلاعات، ممکن است honeypot باشد.
- `/xmlrpc.php` → فعال، پیام: *"XML-RPC server accepts POST requests only"* → قابل حمله.
- `/license.txt`, `/readme`, `/readme.html` → نسخه وردپرس را فاش می‌کند یا به محتوای پیش‌فرض اشاره دارد.

---

## Comments

- ساختار CMS بسیار آسیب‌پذیر و آماده برای حمله است.
- فایل xmlrpc.php و صفحه wp-login اهداف بعدی برای حملات brute-force هستند.
- نسخه PHP قدیمی آسیب‌پذیر است.
