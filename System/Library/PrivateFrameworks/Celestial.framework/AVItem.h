/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface AVItem : NSObject {

	AVItemPrivate* _priv;

}
+(id)avItem;
+(id)avItemWithPath:(id)arg1 error:(id*)arg2 ;
-(id)initWithPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)setPath:(id)arg1 error:(id*)arg2 ;
-(void)stopDownload;
-(long long)eqPreset;
-(id)formatDetailsForTracks;
-(id)nextThumbnailTimesStartingAt:(double)arg1 minimumInterval:(double)arg2 forwards:(BOOL)arg3 maxCount:(long long)arg4 ;
-(id)evenlySpacedThumbnailTimesFromStartTime:(double)arg1 toEndTime:(double)arg2 maxCount:(long long)arg3 ;
-(id)urlFromPath:(id)arg1 ;
-(int)_instantiateItem;
-(void)setEQPreset:(long long)arg1 ;
-(id)chapterImageForImageID:(long long)arg1 ;
-(void*)downloadThread;
-(int)beginDownloading;
-(int)downloadStatus;
-(id)init;
-(void)dealloc;
-(double)duration;
-(id)url;
-(id)path;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)errorLog;
-(id)attributeForKey:(id)arg1 ;
-(CGSize)naturalSize;
-(float)downloadProgress;
-(id)accessLog;
-(id)initWithError:(id*)arg1 ;
-(void)cancelDownload;
@end
