//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UITextField;

@protocol YMMSearchBarDelegate <NSObject>
- (void)ymm_searchBarSearchButtonClicked:(UITextField *)arg1;
- (void)ymm_searchBarDidCancelSearch:(UITextField *)arg1;
- (void)ymm_searchBar:(UITextField *)arg1 textDidChange:(NSString *)arg2;

@optional
- (void)ymm_searchBarTextDidBeginEditing:(UITextField *)arg1;
@end

