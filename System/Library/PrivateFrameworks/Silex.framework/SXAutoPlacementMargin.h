/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXEdgeSpacing.h>

@class NSString;

@interface SXAutoPlacementMargin : NSObject <SXEdgeSpacing> {

	SXConvertibleValue _top;
	SXConvertibleValue _right;
	SXConvertibleValue _bottom;
	SXConvertibleValue _left;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXConvertibleValue left;                //@synthesize left=_left - In the implementation block
@property (nonatomic,readonly) SXConvertibleValue right;               //@synthesize right=_right - In the implementation block
@property (nonatomic,readonly) SXConvertibleValue top;                 //@synthesize top=_top - In the implementation block
@property (nonatomic,readonly) SXConvertibleValue bottom;              //@synthesize bottom=_bottom - In the implementation block
-(id)initWithTop:(SXConvertibleValue)arg1 bottom:(SXConvertibleValue)arg2 ;
-(SXConvertibleValue)left;
-(SXConvertibleValue)top;
-(SXConvertibleValue)right;
-(SXConvertibleValue)bottom;
@end

