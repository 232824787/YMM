//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MAOfflineItem, NSArray, NSString;

@interface MAOfflineMapListDataItem : NSObject <NSCopying>
{
    _Bool _expanded;
    NSString *_itemTitle;
    MAOfflineItem *_offlineItem;
    NSArray *_listItems;
}

+ (long long)calculateCountForListItems:(id)arg1;
+ (void)expandItemsWithListItems:(id)arg1 resutlArray:(id)arg2;
+ (id)allItemsExpandedWithListItems:(id)arg1;
@property(retain, nonatomic) NSArray *listItems; // @synthesize listItems=_listItems;
@property(retain, nonatomic) MAOfflineItem *offlineItem; // @synthesize offlineItem=_offlineItem;
@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic, getter=isCollapsable) _Bool collapsable;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

