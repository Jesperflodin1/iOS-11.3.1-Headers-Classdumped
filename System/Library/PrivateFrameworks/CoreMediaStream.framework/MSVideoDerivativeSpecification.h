/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MSVideoDerivativeSpecification : NSObject {

	BOOL _useCellular;
	BOOL _powerRequired;
	double _bitRate;
	NSString* _videoType;
	unsigned long long _mediaAssetType;

}

@property (nonatomic,readonly) BOOL useCellular;                               //@synthesize useCellular=_useCellular - In the implementation block
@property (nonatomic,readonly) BOOL powerRequired;                             //@synthesize powerRequired=_powerRequired - In the implementation block
@property (nonatomic,readonly) double bitRate;                                 //@synthesize bitRate=_bitRate - In the implementation block
@property (nonatomic,readonly) NSString * videoType;                           //@synthesize videoType=_videoType - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaAssetType;              //@synthesize mediaAssetType=_mediaAssetType - In the implementation block
+(id)videoDerivativeSpecificationsWithDictionaryArray:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)useCellular;
-(BOOL)powerRequired;
-(unsigned long long)mediaAssetType;
-(double)bitRate;
-(NSString *)videoType;
@end

