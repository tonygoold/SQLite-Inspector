//
//  DBPointerMapPageEnumerator.h
//  SQLite Inspector
//
//  Created by R. Tony Goold on 27.07.2016.
//  Copyright © 2016 WP Technology Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DBPointerMapPage;
@class DBReader;

@interface DBPointerMapPageEnumerator : NSEnumerator<DBPointerMapPage *>

- (instancetype)initWithReader:(DBReader *)reader;

@end
