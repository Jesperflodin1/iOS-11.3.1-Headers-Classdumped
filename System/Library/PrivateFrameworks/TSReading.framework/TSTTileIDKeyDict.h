/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPContainedObject.h>

@interface TSTTileIDKeyDict : TSPContainedObject {

	hash_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > >* mMap;

}
-(long long)count;
-(void)dealloc;
-(void)removeAllTiles;
-(id)initWithOwner:(id)arg1 ;
-(void)applyFunction:(/*function pointer*/void*)arg1 withState:(void*)arg2 ;
-(id)tileForID:(SCD_Struct_TS121)arg1 ;
-(void)setTile:(id)arg1 forID:(SCD_Struct_TS121)arg2 ;
-(void)removeTileForID:(SCD_Struct_TS121)arg1 ;
-(void)makeTilesPerformSelector:(SEL)arg1 ;
@end

