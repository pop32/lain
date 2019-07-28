

int main(int argc, char* argv[])
{
#ifdef WIN32
    //util::WinCmdLineArgs winArgs;
	//std::tie(argc, argv) = winArgs.get();
#endif
	//SetupEnvironment();

    // Connect bitcoind signal handlers
	//noui_connect();

    //return (AppInit(argc, argv) ? EXIT_SUCCESS : EXIT_FAILURE);
    return 0;
}
