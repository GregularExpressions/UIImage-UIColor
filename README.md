UIImage-UIColor
===============

UIImage category to create a UIImage based on a given UIColor.

I find it especially useful on UIButton states:

```obj-c
UIColor* defaultColor = [UIColor colorWithRed:63.0/255.0
                                                green:114.0/255.0
                                                 blue:155.0/255.0
                                                alpha:1.0];
        
UIColor* depressedColor = [UIColor colorWithRed:85.0/255.0
                                                  green:155.0/255.0
                                                   blue:210.0/255.0
                                                  alpha:

[self.authButton setBackgroundImage:[UIImage imageWithColor:defaultColor] forState:UIControlStateNormal];
[self.authButton setBackgroundImage:[UIImage imageWithColor:depressedColor] forState:UIControlStateHighlighted];
[self.authButton setBackgroundImage:[UIImage imageWithColor:depressedColor] forState:UIControlStateSelected];
```
