//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString;

@interface YMMCarRequirementTagsModel : YMMCommonModel
{
    _Bool _choose;
    _Bool _alreadyExists;
    NSString *_tagId;
    NSString *_content;
}

@property(nonatomic) _Bool alreadyExists; // @synthesize alreadyExists=_alreadyExists;
@property(nonatomic) _Bool choose; // @synthesize choose=_choose;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
- (void).cxx_destruct;

@end

