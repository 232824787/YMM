//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "HCBFTLNAddressBookReaderDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HCBFTLNAddressBookReader, NSArray, NSDictionary, NSString;

@interface HCBFTLNAddressBookTableView : UITableView <UITableViewDataSource, UITableViewDelegate, HCBFTLNAddressBookReaderDelegate>
{
    id _addressBookDelegate;
    HCBFTLNAddressBookReader *_addressBookReader;
    NSArray *_sectionTitles;
    NSDictionary *_contactsDictionary;
}

@property(retain, nonatomic) NSDictionary *contactsDictionary; // @synthesize contactsDictionary=_contactsDictionary;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) HCBFTLNAddressBookReader *addressBookReader; // @synthesize addressBookReader=_addressBookReader;
@property(nonatomic) __weak id addressBookDelegate; // @synthesize addressBookDelegate=_addressBookDelegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didFailAddressBookSyncWithError:(struct __CFError *)arg1;
- (void)didSyncAddressBook:(id)arg1 contactsDic:(id)arg2;
- (void)didFailAddressBookPermissionGrant;
- (void)didSucceedAddressBookPermissionGrant;
- (void)refreshAddressBookView;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

