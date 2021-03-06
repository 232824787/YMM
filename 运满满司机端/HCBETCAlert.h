//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class HCBETCAlertManager, NSArray, NSMutableArray, NSString, UIActionSheet, UIAlertController, UIAlertView;

@interface HCBETCAlert : NSObject <UIAlertViewDelegate, UIActionSheetDelegate>
{
    NSString *_title;
    NSString *_message;
    unsigned long long _style;
    HCBETCAlertManager *_manager;
    NSMutableArray *_internalActions;
    UIAlertController *_alertController;
    UIAlertView *_alertView;
    UIActionSheet *_actionSheet;
}

+ (id)alertWithTitle:(id)arg1 message:(id)arg2 style:(unsigned long long)arg3;
@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) NSMutableArray *internalActions; // @synthesize internalActions=_internalActions;
@property(nonatomic) __weak HCBETCAlertManager *manager; // @synthesize manager=_manager;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(readonly, nonatomic) unsigned long long cancelButtonIndex;
@property(readonly, nonatomic) NSArray *actions;
- (id)constructActionSheet;
- (id)constructAlertView;
- (id)constructAlertController;
- (id)getActionWithTitle:(id)arg1;
- (id)getActionWithStyle:(unsigned long long)arg1;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)show;
- (void)addAction:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 style:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

