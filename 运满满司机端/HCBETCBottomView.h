//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface HCBETCBottomView : UIView
{
    NSArray *_dataSource;
    id <HCBETCBottomViewDelegate> _delegate;
}

@property(nonatomic) id <HCBETCBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)btnAction:(id)arg1;
- (void)initView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

