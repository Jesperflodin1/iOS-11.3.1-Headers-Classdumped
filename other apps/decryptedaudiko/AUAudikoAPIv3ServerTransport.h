//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUTransport.h"

@class AFHTTPSessionManager;

@interface AUAudikoAPIv3ServerTransport : AUTransport
{
    AFHTTPSessionManager *_httpManager;
}

@property(retain, nonatomic) AFHTTPSessionManager *httpManager; // @synthesize httpManager=_httpManager;
- (void).cxx_destruct;
- (void)obtainMusicOffset:(long long)arg1 byQuery:(id)arg2 requestHandler:(CDUnknownBlockType)arg3;
- (void)fetchAudikoRingtonesWithLimit:(long long)arg1 offset:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)obtainGD78RingtonesWithCompletion:(CDUnknownBlockType)arg1;
- (void)postCoverID:(id)arg1;
- (id)errorDomain;
- (void)obtainWallpapersForCategoryID:(id)arg1 range:(struct AURange)arg2 requestHandler:(CDUnknownBlockType)arg3;
- (void)obtainWallpaperCategories:(CDUnknownBlockType)arg1;
- (void)obtainUserRingtonesWithRequestHandler:(CDUnknownBlockType)arg1;
- (void)postRingtoneID:(id)arg1 giphyID:(id)arg2;
- (void)deleteEntity:(id)arg1 requestHandler:(CDUnknownBlockType)arg2;
- (void)obtainByQuery:(id)arg1 requestHandler:(CDUnknownBlockType)arg2;
- (void)obtainSimilarByArtist:(id)arg1 title:(id)arg2 requestHandler:(CDUnknownBlockType)arg3;
- (void)obtainTopRingtonesWithRequestHandler:(CDUnknownBlockType)arg1;
- (void)postUserRingtone:(id)arg1 requestHandler:(CDUnknownBlockType)arg2;
- (void)postEntity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)obtainEventsWithRange:(struct AURange)arg1 safe:(_Bool)arg2 requestHandler:(CDUnknownBlockType)arg3;
- (void)getEntityById:(id)arg1 requestHandler:(CDUnknownBlockType)arg2;
- (void)setCredential:(id)arg1;
- (id)baseURL;

@end

