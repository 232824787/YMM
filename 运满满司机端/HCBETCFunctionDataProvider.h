//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HCBETCDataProvider.h"
#import "HCBETCTableViewSectionDataSource.h"

@class NSArray, NSString;

@interface HCBETCFunctionDataProvider : NSObject <HCBETCDataProvider, HCBETCTableViewSectionDataSource>
{
    NSArray *_items;
}

- (void).cxx_destruct;
- (unsigned long long)rowCount;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

