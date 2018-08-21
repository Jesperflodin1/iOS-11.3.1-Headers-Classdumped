/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DMutable2DResources.h>

@class TSCH3DArray2D;

@interface TSCH3DArray2DResources : TSCH3DMutable2DResources {

	TSCH3DArray2D* mResources;

}
+(id)resourcesWithSize:(const tvec2<int>*)arg1 ;
+(id)resourcesWithResource:(id)arg1 ;
+(id)mResources;
-(id)firstResource;
-(void)setResource:(id)arg1 atIndex:(const tvec2<int>*)arg2 ;
-(BOOL)hasResourceAtIndex:(const tvec2<int>*)arg1 ;
-(id)resourceAtIndex:(const tvec2<int>*)arg1 ;
-(tvec2<int>)size;
-(void)dealloc;
-(id)initWithSize:(const tvec2<int>*)arg1 ;
-(void)resize:(const tvec2<int>*)arg1 ;
@end

