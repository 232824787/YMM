//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface YMMAudioConfig : NSObject
{
    unsigned long long _source;
    unsigned long long _priority;
    NSString *_content;
    NSURL *_url;
}

@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
- (void).cxx_destruct;

@end

