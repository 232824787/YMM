//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface URCommonModel : NSObject
{
    long long _sid;
    long long _uid;
    NSString *_un;
    long long _t;
    double _lng;
    double _lat;
    NSString *_prov;
    NSString *_city;
    NSString *_cnt;
    NSString *_addr;
    NSString *_dfp;
    NSString *_ov;
    NSString *_m;
    NSString *_no;
    NSString *_nw;
    NSString *_pn;
    long long _did;
    NSString *_vn;
    NSString *_ch;
    NSString *_uuid;
    NSString *_lt;
    NSString *_lid;
    NSString *_appKey;
}

+ (id)data;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(copy, nonatomic) NSString *lid; // @synthesize lid=_lid;
@property(copy, nonatomic) NSString *lt; // @synthesize lt=_lt;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *ch; // @synthesize ch=_ch;
@property(retain, nonatomic) NSString *vn; // @synthesize vn=_vn;
@property(nonatomic) long long did; // @synthesize did=_did;
@property(copy, nonatomic) NSString *pn; // @synthesize pn=_pn;
@property(copy, nonatomic) NSString *nw; // @synthesize nw=_nw;
@property(copy, nonatomic) NSString *no; // @synthesize no=_no;
@property(copy, nonatomic) NSString *m; // @synthesize m=_m;
@property(copy, nonatomic) NSString *ov; // @synthesize ov=_ov;
@property(copy, nonatomic) NSString *dfp; // @synthesize dfp=_dfp;
@property(copy, nonatomic) NSString *addr; // @synthesize addr=_addr;
@property(copy, nonatomic) NSString *cnt; // @synthesize cnt=_cnt;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *prov; // @synthesize prov=_prov;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) long long t; // @synthesize t=_t;
@property(copy, nonatomic) NSString *un; // @synthesize un=_un;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) long long sid; // @synthesize sid=_sid;
- (void).cxx_destruct;
- (id)data2Dic;
- (_Bool)saveWithDB:(id)arg1;

@end

