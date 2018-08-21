/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString, NSURL, PFVideoComplement;

@interface PLStreamShareSource : NSObject {

	NSData* _mediaData;
	NSString* _fileExtension;
	NSURL* _mediaURL;
	PFVideoComplement* _videoComplement;
	long long _mediaType;

}

@property (nonatomic,retain) NSData * mediaData;                               //@synthesize mediaData=_mediaData - In the implementation block
@property (nonatomic,retain) NSString * fileExtension;                         //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,retain) NSURL * mediaURL;                                 //@synthesize mediaURL=_mediaURL - In the implementation block
@property (nonatomic,retain) PFVideoComplement * videoComplement;              //@synthesize videoComplement=_videoComplement - In the implementation block
@property (assign,nonatomic) long long mediaType;                              //@synthesize mediaType=_mediaType - In the implementation block
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)fileExtension;
-(void)setFileExtension:(NSString *)arg1 ;
-(void)_cleanupIfNeededMediaAtURL:(id)arg1 ;
-(id)serializedDictionary;
-(void)setVideoComplement:(PFVideoComplement *)arg1 ;
-(long long)mediaType;
-(NSURL *)mediaURL;
-(void)cleanupResources;
-(void)setMediaType:(long long)arg1 ;
-(PFVideoComplement *)videoComplement;
-(void)setMediaURL:(NSURL *)arg1 ;
-(NSData *)mediaData;
-(void)setMediaData:(NSData *)arg1 ;
@end

