/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WLKMovieClipPreviewArtwork, NSArray, WLKMovieClipAsset;

@interface WLKMovieClip : NSObject {

	NSString* _title;
	WLKMovieClipPreviewArtwork* _previewArtwork;
	NSArray* _assets;

}

@property (nonatomic,copy,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) WLKMovieClipPreviewArtwork * previewArtwork;              //@synthesize previewArtwork=_previewArtwork - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assets;                                    //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) WLKMovieClipAsset * preferredAsset; 
+(id)movieClipsWithArray:(id)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)_init;
-(NSString *)title;
-(NSArray *)assets;
-(WLKMovieClipAsset *)preferredAsset;
-(BOOL)_supportHD;
-(WLKMovieClipPreviewArtwork *)previewArtwork;
@end

