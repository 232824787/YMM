//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HCBETCInvoiceManager : NSObject
{
    _Bool _checkSignProtoc;
    _Bool _signedProtoc;
    NSString *_ticketId;
}

+ (id)shareIntence;
@property(nonatomic) _Bool signedProtoc; // @synthesize signedProtoc=_signedProtoc;
@property(nonatomic) _Bool checkSignProtoc; // @synthesize checkSignProtoc=_checkSignProtoc;
@property(copy, nonatomic) NSString *ticketId; // @synthesize ticketId=_ticketId;
- (void).cxx_destruct;
- (void)logoutNotification:(id)arg1;

@end

