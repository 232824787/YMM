//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString;

@interface YMMCargoListContactInfoModel : YMMCommonModel
{
    NSString *_loadAdress;
    NSString *_unLoadAdress;
    NSString *_desc;
}

@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *unLoadAdress; // @synthesize unLoadAdress=_unLoadAdress;
@property(copy, nonatomic) NSString *loadAdress; // @synthesize loadAdress=_loadAdress;
- (void).cxx_destruct;
- (_Bool)showCargoInfo;
- (_Bool)havedesc;
- (_Bool)haveUnloadAddress;
- (_Bool)haveLoadAddress;

@end

