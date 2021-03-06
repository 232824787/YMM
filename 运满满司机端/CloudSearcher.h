//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CloudSearcher : NSObject
{
    NSMutableArray *_delegateList;
    int _curReqPriority;
    id <CloudSearcherDelegate> _delegate;
}

+ (id)replaceUnicode:(id)arg1;
+ (id)alloc;
+ (void)releaseCloudSearchInstance;
+ (id)getCloudSearchInstance;
@property(nonatomic) int curReqPriority; // @synthesize curReqPriority=_curReqPriority;
@property(nonatomic) id <CloudSearcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onHandleExceptionMsg:(long long)arg1;
- (void)getCloudRGCSearchResult;
- (void)getCloudSearchDetailResult;
- (void)getCloudSearchResult;
- (_Bool)cloudRGCSearch:(id)arg1;
- (_Bool)detailSearchWithSearchInfo:(id)arg1;
- (_Bool)boundSearchWithSearchInfo:(id)arg1;
- (_Bool)nearbySearchWithSearchInfo:(id)arg1;
- (_Bool)localSearchWithSearchInfo:(id)arg1;
- (int)onAppDataOK:(long long)arg1 errorType:(long long)arg2;
- (void)onMsgProc:(long long)arg1 resultType:(long long)arg2 errorType:(long long)arg3;
- (void)onEngineMessage:(id)arg1;
- (void)sendMessageToObserver:(long long)arg1 selectorWithInt:(SEL)arg2;
- (void)sendExceptionMessageToObserver:(long long)arg1;
- (void)sendMessageToObserver:(id)arg1 selector:(SEL)arg2;
- (_Bool)removeObserver:(id)arg1;
- (_Bool)addObserver:(id)arg1;
- (void)cancelCloudSearch;
- (void)unInitCloudSearch;
- (id)initCloudSearch;
- (void)dealloc;

@end

