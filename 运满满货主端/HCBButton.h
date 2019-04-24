//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface HCBButton : UIButton
{
    _Bool _hasBorder;
    long long _cornerRadius;
    long long _style;
}

+ (id)imageWithColor:(id)arg1;
+ (id)hcbButtonWithStyle:(long long)arg1 hasBorder:(_Bool)arg2;
@property(nonatomic) _Bool hasBorder; // @synthesize hasBorder=_hasBorder;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver;
- (void)startObserver;
- (void)dealloc;

@end

