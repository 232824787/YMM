//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSDictionary, NSMutableDictionary, NSString;

@interface LOTAssetGroup : NSObject
{
    NSMutableDictionary *_assetMap;
    NSDictionary *_assetJSONMap;
    NSString *_rootDirectory;
    NSBundle *_assetBundle;
}

@property(readonly, nonatomic) NSBundle *assetBundle; // @synthesize assetBundle=_assetBundle;
@property(retain, nonatomic) NSString *rootDirectory; // @synthesize rootDirectory=_rootDirectory;
- (void).cxx_destruct;
- (id)assetModelForID:(id)arg1;
- (void)finalizeInitializationWithFramerate:(id)arg1;
- (void)buildAssetNamed:(id)arg1 withFramerate:(id)arg2;
- (id)initWithJSON:(id)arg1 withAssetBundle:(id)arg2 withFramerate:(id)arg3;

@end

