/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImage.h>

@class NSDictionary, PLLoadRequestKey;

@interface PLCachedImage : UIImage {

	NSDictionary* _metadata;
	int _format;
	PLLoadRequestKey* _cacheKey;

}

@property (nonatomic,copy) PLLoadRequestKey * cacheKey;              //@synthesize cacheKey=_cacheKey - In the implementation block
@property (assign,nonatomic) int format;                             //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                //@synthesize metadata=_metadata - In the implementation block
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)description;
-(int)format;
-(PLLoadRequestKey *)cacheKey;
-(void)setCacheKey:(PLLoadRequestKey *)arg1 ;
-(NSDictionary *)metadata;
-(void)setFormat:(int)arg1 ;
@end
