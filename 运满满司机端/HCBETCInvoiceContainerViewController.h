//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCInvoiceBaseViewController.h"

@class HCBETCNavigationBar;

@interface HCBETCInvoiceContainerViewController : HCBETCInvoiceBaseViewController
{
    HCBETCNavigationBar *_navView;
}

@property(retain, nonatomic) HCBETCNavigationBar *navView; // @synthesize navView=_navView;
- (void).cxx_destruct;
- (void)clickBackButton:(id)arg1;
- (void)checkNavViewProtocolForController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithHCBNavigatorURL:(id)arg1 query:(id)arg2 complete:(CDUnknownBlockType)arg3;

@end

