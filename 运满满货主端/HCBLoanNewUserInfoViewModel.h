//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBLoanBaseViewModel.h"

@class HCBLoanNewUserPageModel;

@interface HCBLoanNewUserInfoViewModel : HCBLoanBaseViewModel
{
    HCBLoanNewUserPageModel *_pageModel;
}

@property(retain, nonatomic) HCBLoanNewUserPageModel *pageModel; // @synthesize pageModel=_pageModel;
- (void).cxx_destruct;
- (double)cellHeight;
- (void)loadNewUserPageInfoWithCompletion:(CDUnknownBlockType)arg1;

@end

