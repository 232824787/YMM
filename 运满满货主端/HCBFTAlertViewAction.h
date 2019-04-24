//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIButton;

@interface HCBFTAlertViewAction : NSObject
{
    UIButton *_actionButton;
    NSString *_actionName;
    CDUnknownBlockType _actionBlock;
}

+ (id)actionWithName:(id)arg1 color:(id)arg2 actionHandle:(CDUnknownBlockType)arg3;
+ (id)actionWithName:(id)arg1 actionHandle:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (void)p_setActionStyle;
- (void)p_actionTap:(id)arg1;

@end

