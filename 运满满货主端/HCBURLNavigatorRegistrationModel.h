//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCBNavUrlComponents, HCBURLNavigatorMapData, NSString;

@interface HCBURLNavigatorRegistrationModel : NSObject
{
    NSString *_url;
    NSString *_path;
    NSString *_key;
    unsigned long long _navType;
    Class _cls;
    SEL _selector;
    id _target;
    CDUnknownBlockType _handler;
    HCBNavUrlComponents *_URLComponents;
    HCBURLNavigatorMapData *_data;
}

@property(readonly, nonatomic) HCBURLNavigatorMapData *data; // @synthesize data=_data;
@property(readonly, nonatomic) HCBNavUrlComponents *URLComponents; // @synthesize URLComponents=_URLComponents;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(retain, nonatomic) Class cls; // @synthesize cls=_cls;
@property(nonatomic) unsigned long long navType; // @synthesize navType=_navType;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithNavigatorMapData:(id)arg1 URLComponents:(id)arg2;
- (id)instantiateViewControllerWithQuery:(id)arg1;
- (id)instantiateViewController;

@end

