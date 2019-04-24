//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "HCBFTLNAddressBookTableViewDelegate.h"

@class HCBFTLNAddressBookTableView, NSDictionary, NSString;

@interface HCBFTLNAddressBookVC : UIViewController <HCBFTLNAddressBookTableViewDelegate>
{
    _Bool _isPushed;
    id _delegate;
    NSDictionary *_infoDic;
    HCBFTLNAddressBookTableView *_addressBookTableView;
}

@property(retain, nonatomic) HCBFTLNAddressBookTableView *addressBookTableView; // @synthesize addressBookTableView=_addressBookTableView;
@property(retain, nonatomic) NSDictionary *infoDic; // @synthesize infoDic=_infoDic;
@property(nonatomic) _Bool isPushed; // @synthesize isPushed=_isPushed;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addressBookTableViewDidSelectedPerson:(id)arg1 tableView:(id)arg2 contactDetails:(id)arg3;
- (void)clickRightButton:(id)arg1;
- (void)configRightButton;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

