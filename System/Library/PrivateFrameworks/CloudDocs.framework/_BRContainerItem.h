/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <CloudDocs/BRQueryItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _BRContainerItem : BRQueryItem <NSSecureCoding, NSCopying> {

	NSString* _containerID;
	NSString* _localizedName;

}
+(BOOL)supportsSecureCoding;
-(id)parentItemIdentifier;
-(id)containerDisplayName;
-(id)fp_appContainerBundleIdentifier;
-(BOOL)fp_isContainer;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)typeIdentifier;
-(id)displayName;
-(id)filename;
-(id)itemIdentifier;
-(id)initWithQueryItem:(id)arg1 container:(id)arg2 zoneRowID:(id)arg3 ;
-(unsigned long long)capabilities;
@end

