//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPIPaySubViews.h"

@interface PPIPayKeyboardPasss : PPIPaySubViews
{
    id <PPIPayKeyboardPassDelegate> _delegate;
}

@property(nonatomic) id <PPIPayKeyboardPassDelegate> delegate; // @synthesize delegate=_delegate;
- (void)btnClick:(id)arg1;
- (id)createButton:(id)arg1 rect:(struct CGRect)arg2;
- (void)initView:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 discorderKeyboard:(_Bool)arg2;

@end

