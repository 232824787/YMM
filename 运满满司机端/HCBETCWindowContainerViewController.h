//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, UIWindow;

@interface HCBETCWindowContainerViewController : UIViewController
{
    NSString *_internalWindowIdentifier;
}

@property(retain, nonatomic) NSString *internalWindowIdentifier; // @synthesize internalWindowIdentifier=_internalWindowIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIWindow *internalWindow;
- (void)clearWindow;
- (void)dismissWithAnimations:(CDUnknownBlockType)arg1;
- (void)presentWithContentConstruction:(CDUnknownBlockType)arg1 animations:(CDUnknownBlockType)arg2;
- (id)initWithWindowLevel:(double)arg1;

@end

