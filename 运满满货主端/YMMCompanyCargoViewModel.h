//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController;

@interface YMMCompanyCargoViewModel : NSObject
{
    NSString *_cargoSelectDescription;
    UIViewController *_currentVC;
}

@property(retain, nonatomic) UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) NSString *cargoSelectDescription; // @synthesize cargoSelectDescription=_cargoSelectDescription;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestCompanyCargo:(id)arg1 withSuccess:(CDUnknownBlockType)arg2 withFailure:(CDUnknownBlockType)arg3;
- (id)initWithVC:(id)arg1;

@end

