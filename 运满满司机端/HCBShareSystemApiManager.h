//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMessageComposeViewControllerDelegate.h"

@class NSString;

@interface HCBShareSystemApiManager : NSObject <MFMessageComposeViewControllerDelegate>
{
    CDUnknownBlockType _completeBlock;
}

+ (_Bool)sendMessage:(id)arg1 onCompleteBlock:(CDUnknownBlockType)arg2;
+ (_Bool)copyToPasteboardForURL:(id)arg1;
+ (id)sharedManager;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

