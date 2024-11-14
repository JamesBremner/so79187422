struct sElement {
    std::string myName;
    sElement( const std::string& name)
    : myName( name )
    {}
    bool operator==( const sElement& other) const
    {
        return myName == other.myName;
    }

};
class cSO79187422
{
public:
    // get element at index
    sElement getPosition( int index )
    {
        return myV[index];
    }

    // add element at end
    void addEnd( const sElement& e)
    {
        myV.push_back( e );
    }

    // delete element at index
    void deletePosition( int index )
    {
        myV.erase( myV.begin() + index);
    }

    // insert element at index
    void addAt( int index, const sElement& e )
    {
        myV.insert( myV.begin()+index, e);
    }

    // move element at src to dst
    void move( int src, int dst )
    {
        if( src == dst )
            return;
        auto e = getPosition(src);
        deletePosition(src);
        addAt(dst,e);
    }

    // find index of element
    int find( const sElement& e )
    {
        auto it = std::find( myV.begin(),myV.end(),e);
        if( it == myV.end())
            return -1;
        return it - myV.begin();

    }

    // display "list"
    void text() const
    {
        for( auto& e : myV)
            std::cout << e.myName << " ";
        std::cout << "\n";
    }
private:
    std::vector<sElement> myV;
};
