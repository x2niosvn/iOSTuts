Login With iOSTuts.Com Forum Account
## Setup API

Start by adding the following to your project

```
#import "iOSTutsAPI/iOSTuts.h"
```

### Makefile config (Theos)

#Edit TWEAK_NAME and remove @@

```
@@TWEAK_NAME@@_LDFLAGS += iOSTutsAPI/libiOSTuts.a
```

### API Integration


#import "iOSTutsAPI/iOSTuts.h"
```
- (void)viewDidLoad {

    iOSTuts *Auth = [[iOSTuts alloc] init];

    // Gọi đăng nhập
    [Auth FlarumAuth];

    // Thực hiện hành động sau khi đăng nhập thành công
    [Auth LoginDone:^{
        NSString *username = [Auth getUsername];
        NSString *token = [Auth getUserToken]; //Token này hạn chế show ra tránh mất tài khoản.
        NSInteger userID = [Auth getUserID];
        NSString *avatarUrl = [Auth getAvatarUrl];

        NSLog(@"Tên người dùng: %@", username);
        NSLog(@"Token: %@", token); //Token này hạn chế show ra tránh mất tài khoản.
        NSLog(@"ID: %ld", (long)userID);
        NSLog(@"Avatar URL: %@", avatarUrl);
    }];
}
```


```
- (void)logoutUser {
    iOSTuts *Auth = [[iOSTuts alloc] init];
    [Auth logout];
    NSLog(@"Người dùng đã đăng xuất.");
}
```

### Author

Created by [X2NIOS](https://x2nios.com).
