//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString;

@interface YMMAdvertMemberGuideCommentModel : YMMCommonModel
{
    NSString *_guideComment;
    NSString *_buttonComment;
    NSString *_buttonUrl;
    long long _buttonType;
    long long _isValid;
}

@property(nonatomic) long long isValid; // @synthesize isValid=_isValid;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property(copy, nonatomic) NSString *buttonUrl; // @synthesize buttonUrl=_buttonUrl;
@property(copy, nonatomic) NSString *buttonComment; // @synthesize buttonComment=_buttonComment;
@property(copy, nonatomic) NSString *guideComment; // @synthesize guideComment=_guideComment;
- (void).cxx_destruct;
- (id)schemeUrl;

@end

