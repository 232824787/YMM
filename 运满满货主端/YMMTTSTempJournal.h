//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YMMTTSLogLib;

@interface YMMTTSTempJournal : NSObject
{
    NSString *_groupName;
    YMMTTSLogLib *_logLib;
}

@property(retain, nonatomic) YMMTTSLogLib *logLib; // @synthesize logLib=_logLib;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;
- (void)journal_error:(id)arg1;
- (void)journal_start;
- (id)initWithGroupName:(id)arg1;

@end

