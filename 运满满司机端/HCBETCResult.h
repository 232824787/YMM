//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCBError, NSError;

@interface HCBETCResult : NSObject
{
    _Bool _success;
    unsigned long long _type;
    id _content;
    NSError *_error;
    HCBError *_rawError;
}

+ (id)resultWithHCBError:(id)arg1;
+ (id)resultWithContent:(id)arg1 error:(id)arg2;
+ (id)resultWithContent:(id)arg1;
@property(retain, nonatomic) HCBError *rawError; // @synthesize rawError=_rawError;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id content; // @synthesize content=_content;
@property(readonly, nonatomic, getter=isSuccess) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithContent:(id)arg1 error:(id)arg2;

@end

