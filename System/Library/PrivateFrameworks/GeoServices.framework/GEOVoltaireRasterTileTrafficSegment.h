/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOVoltaireRasterTileTrafficSegment : NSObject {

	SCD_Struct_GE93* _vertices;
	long long _vertexCount;
	BOOL _hasSpeed;
	int _speed;
	BOOL _hasWidth;
	int _width;

}

@property (nonatomic,readonly) SCD_Struct_GE93* vertices;              //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,readonly) long long vertexCount;                  //@synthesize vertexCount=_vertexCount - In the implementation block
@property (assign,nonatomic) BOOL hasSpeed;                            //@synthesize hasSpeed=_hasSpeed - In the implementation block
@property (assign,nonatomic) int speed;                                //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) BOOL hasWidth;                            //@synthesize hasWidth=_hasWidth - In the implementation block
@property (assign,nonatomic) int width;                                //@synthesize width=_width - In the implementation block
-(void)setHasWidth:(BOOL)arg1 ;
-(BOOL)hasWidth;
-(void)setHasSpeed:(BOOL)arg1 ;
-(BOOL)hasSpeed;
-(SCD_Struct_GE93*)vertices;
-(void)setVertices:(SCD_Struct_GE93*)arg1 count:(long long)arg2 ;
-(void)setSpeed:(int)arg1 ;
-(int)speed;
-(int)width;
-(void)setWidth:(int)arg1 ;
-(long long)vertexCount;
@end
