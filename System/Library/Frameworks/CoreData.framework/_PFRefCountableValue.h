/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _PFRefCountableValue : NSObject <NSCopying> {

	long long _refCount;
	id _value;

}

@property (nonatomic,readonly) id value; 
-(long long)incrementRefCount;
-(long long)decrementRefCount;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(id)initWithValue:(id)arg1 ;
-(long long)refCount;
@end

