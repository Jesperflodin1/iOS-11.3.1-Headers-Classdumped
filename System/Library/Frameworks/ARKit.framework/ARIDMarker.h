/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ARIDMarker : NSObject {

	int _markerID;
	float _markerSize;

}

@property (assign,nonatomic) int markerID;                  //@synthesize markerID=_markerID - In the implementation block
@property (assign,nonatomic) float markerSize;              //@synthesize markerSize=_markerSize - In the implementation block
+(id)markerWithID:(int)arg1 andSize:(float)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(float)markerSize;
-(void)setMarkerID:(int)arg1 ;
-(void)setMarkerSize:(float)arg1 ;
-(int)markerID;
@end

