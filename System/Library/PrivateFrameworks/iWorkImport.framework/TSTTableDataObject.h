/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSTTableDataObject : NSObject {

	unsigned _refCount;

}

@property (nonatomic,readonly) unsigned refCount;              //@synthesize refCount=_refCount - In the implementation block
-(void)takeReference;
-(void)addReferencesFromObject:(id)arg1 ;
-(BOOL)dropReference;
-(id)initWithRefCount:(unsigned)arg1 ;
-(unsigned)refCount;
@end
