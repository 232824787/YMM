//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSAttributedString, NSString, YMMCommonAlertModel, YMMDialogCommonModel;

@interface YMMDialogCommonButtonModel : YMMCommonModel
{
    NSString *_text;
    unsigned long long _type;
    NSString *_url;
    NSString *_backgroundColor;
    YMMDialogCommonModel *_dialogData;
    YMMCommonAlertModel *_btDialogData;
    NSAttributedString *_h5AttributedStr;
}

@property(retain, nonatomic) NSAttributedString *h5AttributedStr; // @synthesize h5AttributedStr=_h5AttributedStr;
@property(retain, nonatomic) YMMCommonAlertModel *btDialogData; // @synthesize btDialogData=_btDialogData;
@property(retain, nonatomic) YMMDialogCommonModel *dialogData; // @synthesize dialogData=_dialogData;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

