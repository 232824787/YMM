//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OSSCredentialProvider.h"

@class NSString;

@interface OSSCustomSignerCredentialProvider : NSObject <OSSCredentialProvider>
{
    CDUnknownBlockType _signContent;
}

@property(copy, nonatomic) CDUnknownBlockType signContent; // @synthesize signContent=_signContent;
- (void).cxx_destruct;
- (id)sign:(id)arg1 error:(id *)arg2;
- (id)initWithImplementedSigner:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

