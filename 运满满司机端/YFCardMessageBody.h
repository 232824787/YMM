//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YFMessageBody.h"

@class NSDictionary, NSString;

@interface YFCardMessageBody : YFMessageBody
{
    long long _type;
    NSString *_cardType;
    NSDictionary *_content;
}

@property(copy, nonatomic) NSDictionary *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
- (long long)type;
- (void).cxx_destruct;
- (id)initWithCustomContent:(id)arg1 andType:(id)arg2;

@end

