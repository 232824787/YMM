//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HCBETCInvoiceAuthManager : NSObject
{
    NSString *_ticketId;
}

+ (_Bool)isLogin;
+ (id)getTicketId;
+ (void)refreshTicketSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
+ (id)manager;
@property(retain, nonatomic) NSString *ticketId; // @synthesize ticketId=_ticketId;
- (void).cxx_destruct;
- (void)logoutNotification:(id)arg1;
- (id)init;

@end

