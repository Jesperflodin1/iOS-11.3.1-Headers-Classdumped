/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLImageTable;

@interface PLImageTableSegment : NSObject {

	PLImageTable* _imageTable;
	unsigned long long _index;
	void* _ptr;
	unsigned long long _length;
	BOOL _dying;

}
-(oneway void)release;
-(void)dealloc;
-(void*)bytes;
-(id)initWithImageTable:(id)arg1 index:(unsigned long long)arg2 length:(unsigned long long)arg3 idealAddress:(void*)arg4 ;
-(id)initWithImageTable:(id)arg1 offset:(long long)arg2 length:(unsigned long long)arg3 ;
@end
