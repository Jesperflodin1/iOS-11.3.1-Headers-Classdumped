/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class CIBurstImageSetInternal;

@interface CIBurstImageSet : NSObject {

	CIBurstImageSetInternal* _priv;

}
+(id)defaultVersionString;
+(id)burstImageSet;
+(id)burstImageSetWithOptions:(id)arg1 ;
-(id)imageClusterForIdentifier:(id)arg1 ;
-(BOOL)isAction;
-(double)secondsSinceStart;
-(id)statsForImageWithIdentifier:(id)arg1 ;
-(unsigned long long)imageClusterCount;
-(id)imageClusterForIndex:(unsigned long long)arg1 ;
-(void)setLoggingListener:(void*)arg1 withUserInfo:(void*)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(BOOL)isPortrait;
-(id)burstId;
-(id)allImageIdentifiers;
-(id)bestImageIdentifiers;
-(id)coverImageIdentifier;
-(void)addImageFromIOSurface:(IOSurfaceRef)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end
